/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVTopShelfAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVTopShelfPresentViewServiceAction : TVTopShelfAction <NSSecureCoding> {

	NSString* _viewServiceBundleIdentifier;
	NSString* _viewControllerClassName;

}

@property (nonatomic,copy,readonly) NSString * viewServiceBundleIdentifier;              //@synthesize viewServiceBundleIdentifier=_viewServiceBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewControllerClassName;                  //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)viewControllerClassName;
-(NSString *)viewServiceBundleIdentifier;
-(id)initWithViewServiceBundleIdentifier:(id)arg1 viewControllerClassName:(id)arg2 ;
@end
