//
//  BSACustomView.h
//  BSATestSDK
//
//  Created by Joe Cortopassi on 5/2/13.
//  Copyright (c) 2013 BuySellAds. All rights reserved.
//

#import <UIKit/UIKit.h>



@class BSAObjectAd;


@protocol BSACustomViewDelegate
- (void) adOverlayTouchedWithAdObject:(BSAObjectAd *)adObject;
@end


@interface BSACustomView : UIView
@property (nonatomic, strong) id<BSACustomViewDelegate> delegate;
@property (nonatomic, strong) NSString *zoneKey;
- (id) initWithFrame:(CGRect)frame andAdObject:(BSAObjectAd *)adObject;
@end
