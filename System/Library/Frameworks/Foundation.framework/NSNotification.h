/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (copy,readonly) NSString * name; 
@property (retain,readonly) id object; 
@property (copy,readonly) NSDictionary * userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(Class)classForCoder;
-(NSDictionary *)userInfo;
-(id)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
@end
