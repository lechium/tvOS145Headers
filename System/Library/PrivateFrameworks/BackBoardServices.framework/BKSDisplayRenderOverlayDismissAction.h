/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class BKSDisplayRenderOverlayDescriptor;


@protocol BKSDisplayRenderOverlayDismissAction <NSObject>
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
@required
-(void)dismiss;
-(void)dismissWithAnimation:(id)arg1;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;

@end

