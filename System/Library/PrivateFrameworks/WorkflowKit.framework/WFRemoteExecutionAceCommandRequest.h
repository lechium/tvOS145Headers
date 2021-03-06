/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFRemoteExecutionRequest.h>
#import <libobjc.A.dylib/WFPBCodable.h>

@class NSDictionary, NSString;

@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable> {

	NSDictionary* _aceCommandDictionary;

}

@property (nonatomic,readonly) NSDictionary * aceCommandDictionary;              //@synthesize aceCommandDictionary=_aceCommandDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)initWithAceCommandDictionary:(id)arg1 ;
-(NSDictionary *)aceCommandDictionary;
@end

