/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {

	NSString* _fileProtection;

}

@property (nonatomic,copy) NSString * fileProtection;              //@synthesize fileProtection=_fileProtection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)complete;
+(id)completeUntilFirstUserAuthentication;
+(id)completeUnlessOpen;
+(id)none;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileProtection:(NSString *)arg1 ;
-(NSString *)fileProtection;
-(BOOL)indicatesProtection;
-(id)initWithProtection:(id)arg1 ;
@end
