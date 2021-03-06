/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OSLog/OSLogEntry.h>
#import <OSLog/OSLogEntryFromProcess.h>

@class NSString;

@interface OSLogEntryActivity : OSLogEntry <OSLogEntryFromProcess> {

	int _processIdentifier;
	unsigned long long _activityIdentifier;
	NSString* _process;
	NSString* _sender;
	unsigned long long _threadIdentifier;
	unsigned long long _parentActivityIdentifier;

}

@property (nonatomic,readonly) unsigned long long parentActivityIdentifier;              //@synthesize parentActivityIdentifier=_parentActivityIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long activityIdentifier;                    //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * process;                                       //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                                    //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) unsigned long long threadIdentifier;                      //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
-(NSString *)sender;
-(int)processIdentifier;
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;
-(unsigned long long)parentActivityIdentifier;
-(id)initWithEventProxy:(id)arg1 ;
@end

