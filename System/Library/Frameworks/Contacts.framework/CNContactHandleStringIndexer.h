/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject {

	CNCache* _indexImpl;
	NSArray* _targetHandleStrings;

}

@property (nonatomic,readonly) CNCache * indexImpl;                        //@synthesize indexImpl=_indexImpl - In the implementation block
@property (nonatomic,readonly) NSArray * targetHandleStrings;              //@synthesize targetHandleStrings=_targetHandleStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * index; 
+(id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2 ;
-(id)description;
-(id)init;
-(NSDictionary *)index;
-(id)initWithTargetHandleStrings:(id)arg1 ;
-(id)indexWithRawHandles;
-(void)indexContact:(id)arg1 ;
-(void)indexEmailAddressesOnContact:(id)arg1 ;
-(void)indexPhoneNumbersOnContact:(id)arg1 ;
-(void)indexContacts:(id)arg1 ;
-(CNCache *)indexImpl;
-(NSArray *)targetHandleStrings;
@end

