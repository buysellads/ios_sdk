//
//  BSAInstallTracker.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 4/4/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BSANetworkConnectDelegate;

@interface BSAInstallTracker : NSObject <BSANetworkConnectDelegate>
+ (id) confirmInstallationForZoneKey:(NSString *)zoneKey;
@end
