/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, NSNumber;

@interface TIUserModelDataStoreDurableEntry : NSObject {

	NSDate* _creationDate;
	NSDate* _lastUpdateDate;
	NSString* _key;
	NSNumber* _value;

}

@property (readonly) NSDate * creationDate;                //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) NSDate * lastUpdateDate;              //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (readonly) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(NSNumber *)value;
-(NSDate *)creationDate;
-(NSString *)key;
-(NSDate *)lastUpdateDate;
-(id)initWithCreationDate:(id)arg1 withLastUpdateDate:(id)arg2 withKey:(id)arg3 withValue:(id)arg4 ;
@end

