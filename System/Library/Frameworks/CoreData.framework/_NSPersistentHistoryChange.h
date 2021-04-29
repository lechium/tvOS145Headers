/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentHistoryChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSData, NSSQLEntity;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {

	long long _changeID;
	NSManagedObjectID* _changedObjectID;
	long long _changeType;
	NSDictionary* _tombstone;
	NSPersistentHistoryTransaction* _transaction;
	NSData* _columns;
	NSSQLEntity* _sqlEntity;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(id)changedObjectID;
-(id)transaction;
-(long long)changeID;
-(id)updatedProperties;
-(id)tombstone;
@end

