/*
 * SPDX-License-Identifier: MIT
 *
 * Copyright 2026 Adobe
 * All Rights Reserved.
 *
 * NOTICE: Adobe permits you to use, modify, and distribute this file in
 * accordance with the terms of the Adobe license agreement accompanying
 * it.
 */

#pragma once

namespace adobe::predicates {

using REAL = double;

void exactinit();

REAL orient2d(const REAL* pa, const REAL* pb, const REAL* pc);
REAL orient3d(const REAL* pa, const REAL* pb, const REAL* pc, const REAL* pd);

REAL incircle(const REAL* pa, const REAL* pb, const REAL* pc, const REAL* pd);
REAL insphere(const REAL* pa, const REAL* pb, const REAL* pc, const REAL* pd, const REAL* pe);

} // namespace adobe::predicates
