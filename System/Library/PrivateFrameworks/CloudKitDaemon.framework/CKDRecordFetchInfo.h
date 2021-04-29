/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class CKRecordID, NSString, CKRecord, NSError, NSObject;

@interface CKDRecordFetchInfo : NSObject {

	BOOL _ignoreErrors;
	double _startDate;
	unsigned long long _fetchOrder;
	CKRecordID* _recordID;
	NSString* _etag;
	unsigned long long _state;
	CKRecord* _record;
	NSError* _error;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_source> _recordReadySource;

}

@property (assign,nonatomic) unsigned long long fetchOrder;                                //@synthesize fetchOrder=_fetchOrder - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                        //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                              //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) double startDate;                                           //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                            //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;              //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (assign,nonatomic) BOOL ignoreErrors;                                            //@synthesize ignoreErrors=_ignoreErrors - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)completionBlock;
-(double)startDate;
-(NSString *)etag;
-(CKRecordID *)recordID;
-(void)setEtag:(NSString *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecord *)record;
-(id)CKPropertiesDescription;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(BOOL)ignoreErrors;
-(unsigned long long)fetchOrder;
-(id)initWithAggregator:(id)arg1 ;
-(void)performCallback;
-(void)setFetchOrder:(unsigned long long)arg1 ;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setIgnoreErrors:(BOOL)arg1 ;
@end

