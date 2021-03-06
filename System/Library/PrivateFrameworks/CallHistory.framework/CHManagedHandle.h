/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSString, NSSet;

@interface CHManagedHandle : NSManagedObject

@property (nonatomic,readonly) CHHandle * chHandle; 
@property (nonatomic,copy) NSString * normalizedValue; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSSet * localParticipantCalls; 
@property (nonatomic,retain) NSSet * remoteParticipantCalls; 
+(id)fetchRequest;
+(id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(CHHandle *)chHandle;
-(id)copyWithContext:(id)arg1 ;
@end

