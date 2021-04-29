/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, WFAction;

@interface WFActionRequest : NSObject {

	NSString* _actionIdentifier;
	NSDictionary* _serializedParameters;
	WFAction* _result;

}

@property (nonatomic,retain) WFAction * result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSString * actionIdentifier;                      //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * serializedParameters;              //@synthesize serializedParameters=_serializedParameters - In the implementation block
-(id)description;
-(WFAction *)result;
-(void)setResult:(WFAction *)arg1 ;
-(NSString *)actionIdentifier;
-(NSDictionary *)serializedParameters;
-(id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2 ;
@end
