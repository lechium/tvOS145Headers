/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {

	BOOL _recordIsGroup;
	BOOL _importingToExistingGroup;

}

@property (assign) BOOL recordIsGroup;              //@synthesize recordIsGroup=_recordIsGroup - In the implementation block
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)arg1 ;
-(void*)valueForProperty:(unsigned)arg1 ;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(BOOL)propertyIsValidForPerson:(unsigned)arg1 ;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setRecordIsGroup:(BOOL)arg1 ;
-(id)initWithPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(id)initWithGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(void)_drainExistingProperties;
-(BOOL)recordIsGroup;
@end

