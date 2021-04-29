/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSSet;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {

	NSMutableDictionary* _recordIDToRecord;

}

@property (nonatomic,readonly) NSSet * records; 
@property (nonatomic,readonly) NSObject*<PKCloudStoreCoding> item; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<PKCloudStoreCoding>)item;
-(NSSet *)records;
-(id)primaryIdentifier;
-(id)initWithRecords:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 ;
@end

