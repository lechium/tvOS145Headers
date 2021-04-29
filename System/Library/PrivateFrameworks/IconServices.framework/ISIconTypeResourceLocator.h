/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/ISIconResourceLocator.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding> {

	NSString* _type;

}

@property (readonly) NSString * type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(id)bundleIdentifier;
-(id)initWithType:(id)arg1 ;
-(BOOL)allowLocalizedIcon;
-(id)resourceDirectoryURL;
-(id)preferedResourceName;
@end
