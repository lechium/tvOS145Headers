/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXUIWidgetBar.h>
#import <libobjc.A.dylib/PXUIWidgetFooterViewDelegate.h>

@class NSString;

@interface PXUIWidgetFooterBar : PXUIWidgetBar <PXUIWidgetFooterViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisclosureTitle:(id)arg1 ;
-(id)createView;
-(void)updateView;
-(double)viewHeight;
-(void)setSpec:(id)arg1 ;
-(void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2 ;
@end
