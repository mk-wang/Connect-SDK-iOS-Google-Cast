//
//  CastService.h
//  Connect SDK
//
//  Created by Jeremy White on 2/7/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#define kConnectSDKCastServiceId @"Chromecast"

#import "VolumeControl.h"
#import "CastService_Types.h"
#import "Capability.h"
#import "DeviceService.h"
#import "MediaPlayer.h"
#import "WebAppLauncher.h"

@interface CastService : DeviceService <MediaPlayer, MediaControl, VolumeControl, WebAppLauncher>

/*! The GCKDeviceManager that CastService is using internally to manage devices. */
@property (nonatomic, retain, readonly) GCKDeviceManager *castDeviceManager;

/*! The GCKDevice object that CastService is using internally for device information. */
@property (nonatomic, retain, readonly) GCKDevice *castDevice;

/*! The CastServiceChannel is used for app-to-app communication that is handling by the Connect SDK JavaScript Bridge. */
@property (nonatomic, retain, readonly) CastServiceChannel *castServiceChannel;

/*! The GCKMediaControlChannel that the CastService is using to send media events to the connected web app. */
@property (nonatomic, retain, readonly) GCKMediaControlChannel *castMediaControlChannel;

/*! The CastService will launch the specified web app id. */
@property (nonatomic, copy)NSString *castWebAppId;

// @cond INTERNAL
- (void) playMedia:(GCKMediaInformation *)mediaInformation webAppId:(NSString *)webAppId success:(MediaPlayerSuccessBlock)success failure:(FailureBlock)failure;
// @endcond

@end
