/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTAgentDiagnosticDelegate;
@class NSString;

@interface MTAgentDiagnosticListener : NSObject <MTAgentNotificationListener> {

	id<MTAgentDiagnosticDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTAgentDiagnosticDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTAgentDiagnosticDelegate>)delegate;
-(void)setDelegate:(id<MTAgentDiagnosticDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addStateHandler;
@end

