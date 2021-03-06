/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString;

@interface CNObjCMethod : NSObject {

	NSString* _name;
	/*function pointer*/void* _implementation;
	NSString* _typeEncoding;

}

@property (readonly) SEL selector; 
@property (copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) /*function pointer*/void* implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (copy,readonly) NSString * typeEncoding;                          //@synthesize typeEncoding=_typeEncoding - In the implementation block
+(id)methodWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(NSString *)name;
-(SEL)selector;
-(id)initWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(id)initWithMethod:(objc_methodRef)arg1 ;
-(id)methodBySettingName:(id)arg1 ;
-(id)performOnObject:(id)arg1 ;
-(/*function pointer*/void*)implementation;
-(NSString *)typeEncoding;
@end

