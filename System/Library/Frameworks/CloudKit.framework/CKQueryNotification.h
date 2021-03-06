/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	long long _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;
	long long _databaseScope;

}

@property (assign,nonatomic) long long queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                      //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                        //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(CKRecordID *)recordID;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setQueryNotificationReason:(long long)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(long long)queryNotificationReason;
-(NSDictionary *)recordFields;
-(BOOL)isPublicDatabase;
@end

