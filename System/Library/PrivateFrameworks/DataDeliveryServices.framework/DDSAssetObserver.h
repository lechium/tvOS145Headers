/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DDSAssetObserving.h>

@protocol DDSAssetObservingDelegate;
@class NSSet, NSString;

@interface DDSAssetObserver : NSObject <DDSAssetObserving> {

	id<DDSAssetObservingDelegate> _delegate;
	NSSet* _typesToObserve;

}

@property (assign,nonatomic,__weak) id<DDSAssetObservingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * typesToObserve;                                     //@synthesize typesToObserve=_typesToObserve - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<DDSAssetObservingDelegate>)delegate;
-(void)setDelegate:(id<DDSAssetObservingDelegate>)arg1 ;
-(void)observeAssetTypes:(id)arg1 ;
-(void)beginObservingTypes:(id)arg1 ;
-(NSSet *)typesToObserve;
-(void)endObservingTypes:(id)arg1 ;
-(void)notifyObserversAssetsUpdatedForType:(id)arg1 ;
-(void)setTypesToObserve:(NSSet *)arg1 ;
@end

