/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData, NSSet, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject <WFRecordStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL shouldPrompt; 
@property (assign,nonatomic) int source; 
@property (nonatomic,retain) NSData * suggestionData; 
@property (nonatomic,retain) NSSet * events; 
@property (nonatomic,retain) WFCoreDataRunEvent * runEvents; 
@property (nonatomic,retain) WFCoreDataWorkflow * shortcut; 
+(id)fetchRequest;
+(id)recordPropertyMap;
-(id)descriptor;
-(id)trigger;
@end

