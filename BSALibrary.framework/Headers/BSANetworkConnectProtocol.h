//
//  BSANetworkConnectProtocol.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 8/25/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BSAObjectNetworkResponse;

@protocol BSANetworkConnectDelegate <NSObject>
- (void) responseFromPost:(BSAObjectNetworkResponse *) responseObject;
@end
