/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FLExtensionHostContextInterface;
@class FLExtensionContext, NSExtension, NSString, NSUUID;

@interface FLHeadlessExtensionLoader : NSObject {

	FLExtensionContext* _extensionContext;
	id<FLExtensionHostContextInterface> _delegate;
	NSExtension* _extension;
	/*^block*/id _requestInterruptionBlock;
	NSString* _identifier;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) NSExtension * extension; 
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id requestInterruptionBlock;                 //@synthesize requestInterruptionBlock=_requestInterruptionBlock - In the implementation block
+(id)sharedExtensionQueue;
-(id)description;
-(void)dealloc;
-(NSString *)identifier;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(id)requestInterruptionBlock;
-(id)initWithIdentifier:(id)arg1 ;
-(NSExtension *)extension;
-(void)setRequestInterruptionBlock:(id)arg1 ;
-(id)remoteInterface;
-(id)_loadExtensionForIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadExtension:(id*)arg1 ;
-(BOOL)_setupSessionIfNeeded:(id*)arg1 ;
-(id)_hostContextForExtension:(id)arg1 ;
-(void)_terminate;
-(id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2 ;
@end
