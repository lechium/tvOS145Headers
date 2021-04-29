/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Contacts/Contacts-Structs.h>
@interface CNiOSABConversions : NSObject
+(void)initialize;
+(id)os_log;
+(id)stringFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)dateFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)dataFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)numberFromIntegerABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(BOOL)arg3 ;
+(void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id*)arg4 ;
+(id)arrayByMappingTransform:(/*^block*/id)arg1 onCFArray:(CFArrayRef)arg2 ;
@end

