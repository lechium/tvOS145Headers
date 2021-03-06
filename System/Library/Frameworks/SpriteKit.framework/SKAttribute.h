/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SKAttribute : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _nameString;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
+(BOOL)supportsSecureCoding;
+(id)attributeWithName:(id)arg1 type:(long long)arg2 ;
-(NSString *)name;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*)getNameString;
-(BOOL)isEqualToAttribute:(id)arg1 ;
@end

