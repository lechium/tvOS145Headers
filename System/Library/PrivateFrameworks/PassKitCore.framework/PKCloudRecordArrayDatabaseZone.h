/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID, NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {

	CKRecordZoneID* _zoneID;
	NSString* _databaseIdentifier;
	NSMutableDictionary* _cloudRecordByZoneRecord;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByZoneRecord;              //@synthesize cloudRecordByZoneRecord=_cloudRecordByZoneRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)count;
-(id)allObjects;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allRecordIDs;
-(id)allItems;
-(id)descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)allRecordNames;
-(void)applyCloudRecordDatabaseZone:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 databaseIdentifier:(id)arg2 ;
-(NSMutableDictionary *)cloudRecordByZoneRecord;
-(void)setCloudRecordByZoneRecord:(NSMutableDictionary *)arg1 ;
@end

