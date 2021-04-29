/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface WFCoreDataChangeNotification : NSObject {

	BOOL _invalidatedAllObjects;
	int _processIdentifier;
	NSSet* _updated;
	NSSet* _inserted;
	NSSet* _deleted;

}

@property (nonatomic,readonly) BOOL invalidatedAllObjects;              //@synthesize invalidatedAllObjects=_invalidatedAllObjects - In the implementation block
@property (nonatomic,readonly) NSSet * updated;                         //@synthesize updated=_updated - In the implementation block
@property (nonatomic,readonly) NSSet * inserted;                        //@synthesize inserted=_inserted - In the implementation block
@property (nonatomic,readonly) NSSet * deleted;                         //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) int processIdentifier;                   //@synthesize processIdentifier=_processIdentifier - In the implementation block
-(id)debugDescription;
-(int)processIdentifier;
-(id)dictionaryRepresentation;
-(BOOL)hasChanges;
-(NSSet *)inserted;
-(NSSet *)updated;
-(NSSet *)deleted;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)insertedDescriptors;
-(id)initWithInvalidatedAllObjects:(BOOL)arg1 updated:(id)arg2 inserted:(id)arg3 deleted:(id)arg4 processIdentifier:(int)arg5 ;
-(id)notificationByMergingChangesFromNotification:(id)arg1 ;
-(BOOL)originatedInCurrentProcess;
-(BOOL)appliesToObjectIDs:(id)arg1 ;
-(BOOL)appliesToResultState:(id)arg1 ;
-(BOOL)appliesToObjectURIRepresentations:(id)arg1 ;
-(id)updatedDescriptors;
-(id)deletedDescriptors;
-(BOOL)invalidatedAllObjects;
@end

