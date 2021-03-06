/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle {

	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithPolicySession:(id)arg1 name:(id)arg2 ;
-(id)initWithPolicySession:(id)arg1 ;
@end

