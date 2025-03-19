//
//  CastService_Types.h
//  ConnectSDK
//
//  Created by MK on 2024/2/1.
//

#ifndef CastService_Types_H
#define CastService_Types_H

@class CastServiceChannel;

@class GCKDeviceManager;
@class GCKDevice;
@class GCKMediaControlChannel;
@class GCKMediaInformation;
@class GCKApplicationMetadata;

@protocol GCKDeviceManagerDelegate;

#if TARGET_OS_SIMULATOR
#define GOOGLE_CAST_ENABLED 0
#else
#define GOOGLE_CAST_ENABLED 1
#endif

#endif

