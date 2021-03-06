/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RFX_EMBMS_MESSAGE_ID_HEADER__
#define __RFX_EMBMS_MESSAGE_ID_HEADER__

// between RILJ and Rtc layer
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_ENABLE)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_DISABLE)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_START_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_STOP_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_SWITCH_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_GET_TIME)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_RTC_EMBMS_GET_COVERAGE_STATE)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_CELL_INFO_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_COVERAGE_STATE)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_ACTIVE_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_AVAILABLE_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_SAI_LIST_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_OOS_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_MODEM_EE_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_RTC_EMBMS_SESSION_STATUS)

// between Rtc and Rmc layer
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_AT_CMD)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_ENABLE)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_DISABLE)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_START_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_STOP_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_GET_TIME)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_SET_E911)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_EMBMS_TRIGGER_CELL_INFO_NOTIFY)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_AT_INFO)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_START_SESSION_RESPONSE)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_CELL_INFO_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_COVERAGE_STATE)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_ACTIVE_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_AVAILABLE_SESSION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_SAI_LIST_NOTIFICATION)
RFX_MSG_ID_EXPN(RFX_MSG_URC_EMBMS_OOS_NOTIFICATION)

// between Rtc layers
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_EMBMS_INITIAL_VARIABLE)
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_EMBMS_POST_NETWORK_UPDATE)
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_EMBMS_POST_HVOLTE_UPDATE)
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_EMBMS_POST_SAI_UPDATE)
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_EMBMS_POST_SESSION_UPDATE)
#endif
