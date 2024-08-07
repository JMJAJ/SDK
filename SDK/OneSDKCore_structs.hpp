#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OneSDKCore

#include "Basic.hpp"


namespace SDK
{

// Enum OneSDKCore.EMakeUpCallbackType
// NumValues: 0x000F
enum class EMakeUpCallbackType : uint8
{
	GetTagList                               = 1,
	UploadWithPicPaths                       = 2,
	DeleteDataWithFaceID                     = 3,
	QueryDataWithFaceID                      = 4,
	QueryListWithDataType                    = 5,
	QueryRecommendList                       = 6,
	LikeWithFaceID                           = 7,
	CollectWithFaceID                        = 8,
	UpdateScoreWithFaceID                    = 9,
	GetImageDataWithUrl                      = 10,
	ClearDiskCache                           = 11,
	UpdateDataWithFaceID                     = 12,
	GetUserCount                             = 13,
	GetFaceDataWithUrl                       = 14,
	EMakeUpCallbackType_MAX                  = 15,
};

}

