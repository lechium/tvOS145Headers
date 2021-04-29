/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/PocketAPIDelegate.h>

@class NSString;

@interface WFPocketGetAction : WFAction <PocketAPIDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)pocketAPI:(id)arg1 receivedResponse:(id)arg2 forAPIMethod:(id)arg3 error:(id)arg4 ;
@end
