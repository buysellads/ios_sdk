//
//  BSAAdServer.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 3/27/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BSACustomView.h"
#import "BSAStaticAd.h"



@interface BSAAdController : NSObject  <BSACustomViewDelegate>
@property (nonatomic, strong) UIView *customView;
@property (nonatomic, strong) BSAStaticAd *ad;
+ (id) createControllerFromZoneKey:(NSString *)zonekey;
+ (id) createControllerFromZoneKey:(NSString *)zonekey withCategory:(NSString *)category;
@end
