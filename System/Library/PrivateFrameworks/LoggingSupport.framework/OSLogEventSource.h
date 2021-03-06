/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogCollectionReference, _OSLogEventStoreMetadata, _OSLogEventStoreTimeRef, NSUUID, NSDate;

@interface OSLogEventSource : NSObject {

	NSMutableArray* _fileRefs;
	_OSLogCollectionReference* _lcr;
	_OSLogEventStoreMetadata* _lesm;
	_OSLogEventStoreTimeRef* _oldestTimeRef;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,retain) NSMutableArray * _fileRefs;                             //@synthesize fileRefs=_fileRefs - In the implementation block
@property (nonatomic,readonly) os_timesync_db_sRef tsdb;                             //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,readonly) _OSLogCollectionReference * lcr;                      //@synthesize lcr=_lcr - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreMetadata * lesm;                      //@synthesize lesm=_lesm - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestTimeRef;              //@synthesize oldestTimeRef=_oldestTimeRef - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * newestTimeRef; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSDate * oldestDate; 
@property (nonatomic,readonly) NSDate * newestDate; 
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(os_timesync_db_sRef)tsdb;
-(NSDate *)newestDate;
-(_OSLogCollectionReference *)lcr;
-(void)_enumerateIndexFiles:(/*^block*/id)arg1 ;
-(_OSLogEventStoreMetadata *)lesm;
-(NSMutableArray *)_fileRefs;
-(_OSLogEventStoreTimeRef *)oldestTimeRef;
-(_OSLogEventStoreTimeRef *)newestTimeRef;
-(NSDate *)oldestDate;
-(id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(os_timesync_db_sRef)arg3 ;
-(void)_insertIndexFile:(id)arg1 ;
-(void)set_fileRefs:(NSMutableArray *)arg1 ;
@end

