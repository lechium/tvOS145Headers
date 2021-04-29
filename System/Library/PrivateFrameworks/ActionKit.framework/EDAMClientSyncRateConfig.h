/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject {

	NSNumber* _syncStateIntervalMillis;
	NSNumber* _updateNoteWhenIdleForMillis;
	NSNumber* _updateNoteDuringEditIntervalMillis;

}

@property (nonatomic,retain) NSNumber * syncStateIntervalMillis;                         //@synthesize syncStateIntervalMillis=_syncStateIntervalMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteWhenIdleForMillis;                     //@synthesize updateNoteWhenIdleForMillis=_updateNoteWhenIdleForMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteDuringEditIntervalMillis;              //@synthesize updateNoteDuringEditIntervalMillis=_updateNoteDuringEditIntervalMillis - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)syncStateIntervalMillis;
-(void)setSyncStateIntervalMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteWhenIdleForMillis;
-(void)setUpdateNoteWhenIdleForMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteDuringEditIntervalMillis;
-(void)setUpdateNoteDuringEditIntervalMillis:(NSNumber *)arg1 ;
@end

