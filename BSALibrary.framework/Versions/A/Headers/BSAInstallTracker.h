//
//  BSAInstallTracker.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 4/4/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSANetworkConnectProtocol.h"


@interface BSAInstallTracker : NSObject <BSANetworkConnectDelegate>
+ (id) confirmInstallationForZoneKey:(NSString *)zoneKey;
@end
