/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXUserInterfaceElementEventTracker.h>
#import <libobjc.A.dylib/PXPhotosDetailsAssetsWidgetEventTracker.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker : PXUserInterfaceElementEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver> {

	BOOL _isDisplayingCuratedContent;
	NSString* _visibleState;
	long long _visibleStateSignpost;

}

@property (nonatomic,retain) NSString * visibleState;                      //@synthesize visibleState=_visibleState - In the implementation block
@property (assign,nonatomic) long long visibleStateSignpost;               //@synthesize visibleStateSignpost=_visibleStateSignpost - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingCuratedContent;              //@synthesize isDisplayingCuratedContent=_isDisplayingCuratedContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)logContentViewWillAppear;
-(void)logContentViewDidDisappear;
-(BOOL)isDisplayingCuratedContent;
-(void)setIsDisplayingCuratedContent:(BOOL)arg1 ;
-(void)_invalidateVisibleState;
-(void)_updateVisibleState;
-(void)setVisibleState:(NSString *)arg1 ;
-(void)_logDidStartViewingState:(id)arg1 ;
-(void)_logDidEndViewingState:(id)arg1 ;
-(NSString *)visibleState;
-(long long)visibleStateSignpost;
-(void)setVisibleStateSignpost:(long long)arg1 ;
@end
