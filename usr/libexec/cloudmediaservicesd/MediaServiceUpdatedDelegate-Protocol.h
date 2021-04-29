//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MediaServiceConnectionDelegate-Protocol.h"

@class MediaService, NSUUID;

@protocol MediaServiceUpdatedDelegate <MediaServiceConnectionDelegate>

@optional
- (void)userDidUpdateDefaultService:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;
- (void)userDidRemoveService:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;
- (void)serviceSettingDidUpdate:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;
@end
