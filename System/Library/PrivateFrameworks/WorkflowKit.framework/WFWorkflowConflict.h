/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, WFWorkflowRecord;

@interface WFWorkflowConflict : NSObject {

	NSString* _localWorkflowID;
	WFWorkflowRecord* _localWorkflowRecord;
	NSString* _remoteWorkflowID;
	WFWorkflowRecord* _remoteWorkflowRecord;

}

@property (nonatomic,copy) NSString * localWorkflowID;                             //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * localWorkflowRecord;               //@synthesize localWorkflowRecord=_localWorkflowRecord - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;                            //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (nonatomic,retain) WFWorkflowRecord * remoteWorkflowRecord;              //@synthesize remoteWorkflowRecord=_remoteWorkflowRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(id)resolutionKeepingLocal:(BOOL)arg1 keepingRemote:(BOOL)arg2 ;
-(WFWorkflowRecord *)localWorkflowRecord;
-(void)setLocalWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(WFWorkflowRecord *)remoteWorkflowRecord;
-(void)setRemoteWorkflowRecord:(WFWorkflowRecord *)arg1 ;
@end

