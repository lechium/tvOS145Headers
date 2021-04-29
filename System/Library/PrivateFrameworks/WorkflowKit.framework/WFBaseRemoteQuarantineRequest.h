/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/WFRemoteQuarantineRequest.h>

@class NSString, NSDictionary;

@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest> {

	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _userLocale;

}

@property (nonatomic,readonly) NSString * appVersion;                                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * userLocale;                                      //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * policyFunctionName; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptMessage; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorMessage; 
+(id)JSONKeyPathsByPropertyKey;
-(id)init;
-(NSString *)osVersion;
-(NSString *)appVersion;
-(NSString *)userLocale;
-(NSString *)policyFunctionName;
-(NSString *)defaultLocalizedPromptTitle;
-(NSString *)defaultLocalizedPromptMessage;
-(NSString *)defaultLocalizedDeniedErrorTitle;
-(NSString *)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
@end

