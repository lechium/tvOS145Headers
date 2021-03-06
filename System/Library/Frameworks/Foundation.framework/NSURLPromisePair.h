/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface NSURLPromisePair : NSObject <NSSecureCoding> {

	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (copy,readonly) NSURL * URL; 
@property (readonly) NSURL * logicalURL;               //@synthesize logicalURL=_logicalURL - In the implementation block
@property (readonly) NSURL * physicalURL;              //@synthesize physicalURL=_physicalURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithURL:(id)arg1 ;
+(id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSURL *)logicalURL;
-(NSURL *)physicalURL;
@end

