/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CMFallDetectionManagerInternalDelegate.h>

@protocol CMFallDetectionDelegate;
@class CMFallDetectionManagerInternal, NSString;

@interface CMFallDetectionManager : NSObject <CMFallDetectionManagerInternalDelegate> {

	CMFallDetectionManagerInternal* _internal;
	id<CMFallDetectionDelegate> _delegate;

}

@property (nonatomic,readonly) long long authorizationStatus; 
@property (assign,nonatomic,__weak) id<CMFallDetectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(id<CMFallDetectionDelegate>)delegate;
-(void)setDelegate:(id<CMFallDetectionDelegate>)arg1 ;
-(long long)authorizationStatus;
-(void)fallDetectionManagerInternalDidUpdateEnablementState:(id)arg1 ;
-(void)fallDetectionManagerInternal:(id)arg1 didUpdateFallEvent:(id)arg2 ;
-(void)fallDetectionManagerInternalDidStartBackgroundSession:(id)arg1 ;
-(void)_updateDelegateWithFallEvent:(id)arg1 ;
-(void)requestAuthorizationWithHandler:(/*^block*/id)arg1 ;
@end
