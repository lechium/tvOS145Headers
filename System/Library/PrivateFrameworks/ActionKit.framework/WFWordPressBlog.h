/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSURL, NSNumber, NSString, NSDictionary;

@interface WFWordPressBlog : MTLModel <MTLJSONSerializing> {

	BOOL _isAdmin;
	NSURL* _url;
	NSURL* _endpointURL;
	NSNumber* _blogId;
	NSString* _blogName;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSURL * endpointURL;                         //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * blogId;                           //@synthesize blogId=_blogId - In the implementation block
@property (nonatomic,copy,readonly) NSString * blogName;                         //@synthesize blogName=_blogName - In the implementation block
@property (nonatomic,readonly) BOOL isAdmin;                                     //@synthesize isAdmin=_isAdmin - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)urlJSONTransformer;
+(id)endpointURLJSONTransformer;
+(id)blogIdJSONTransformer;
+(id)isAdminJSONTransformer;
+(id)blogWithEndpointURL:(id)arg1 ;
-(NSURL *)url;
-(NSURL *)endpointURL;
-(BOOL)isAdmin;
-(id)initWithEndpointURL:(id)arg1 ;
-(NSNumber *)blogId;
-(NSString *)blogName;
@end
