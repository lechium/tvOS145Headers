/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSLocking.h>

@protocol NSLocking, CNFileServices;
@class NSString;

@interface CNProcessSharedLock : NSObject <NSLocking> {

	NSString* _lockFilePath;
	NSString* _name;
	id<NSLocking> _localLock;
	long long _localLockCount;
	int _fileDescriptor;
	id<CNFileServices> _fileServices;

}

@property (copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * lockFilePath;              //@synthesize lockFilePath=_lockFilePath - In the implementation block
+(id)os_log;
+(id)recursiveSharedLockWithLockFilePath:(id)arg1 ;
+(id)sharedLockWithLockFilePath:(id)arg1 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(void)invalidate;
-(BOOL)isValid;
-(void)setName:(NSString *)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3 ;
-(BOOL)ensureFileDescriptorIsInvalid:(/*^block*/id)arg1 ;
-(BOOL)openLockFile:(/*^block*/id)arg1 ;
-(BOOL)ensureFileIsLocal:(/*^block*/id)arg1 ;
-(BOOL)isValidFileDescriptor;
-(id)errorUserInfoWithDescription:(id)arg1 ;
-(id)errorUserInfo;
-(void)lockRetryOnEDEADLK;
-(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
-(NSString *)lockFilePath;
@end

