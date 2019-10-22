/******************************************************************************
 *
 * Copyright (c) 2019, the Perspective Authors.
 *
 * This file is part of the Perspective library, distributed under the terms of
 * the Apache License 2.0.  The full license can be found in the LICENSE file.
 *
 */
#pragma once
#ifdef PSP_ENABLE_PYTHON

#include <perspective/base.h>
#include <perspective/binding.h>
#include <perspective/python/base.h>
#include <perspective/utils.h>

namespace perspective {
namespace binding {

/******************************************************************************
 *
 * Fill columns with data
 */

template <>
void set_column_nth(std::shared_ptr<t_column> col, t_uindex idx, t_val value);

void _fill_col_numpy(t_data_accessor accessor, t_data_table& tbl,
    std::shared_ptr<t_column> col, std::string name, std::int32_t cidx, t_dtype type, bool is_update);

/******************************************************************************
 *
 * Fill tables with data
 */

void _fill_data(t_data_table& tbl, t_data_accessor accessor, const t_schema& input_schema, const std::string& index, std::uint32_t offset, std::uint32_t limit, bool is_update);

/******************************************************************************
 *
 * Add computed columns
 */

/*
template <>
void add_computed_column(std::shared_ptr<t_data_table> table, const std::vector<t_uindex>& row_indices, t_val computed_def);

template <>
void make_computed_lambdas(std::vector<t_val> computed)
*/

} //namespace binding
} //namespace perspective

#endif