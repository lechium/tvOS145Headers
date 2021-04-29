/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@interface MiroPhotoFreezeInfo : MiroFreezeInfo {

	BOOL _added;
	BOOL _removed;
	BOOL _used;
	BOOL _iris;
	double _duration;

}

@property (assign,nonatomic) BOOL added;                   //@synthesize added=_added - In the implementation block
@property (assign,nonatomic) BOOL removed;                 //@synthesize removed=_removed - In the implementation block
@property (assign,nonatomic) BOOL used;                    //@synthesize used=_used - In the implementation block
@property (assign,nonatomic) BOOL iris;                    //@synthesize iris=_iris - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(id)dataRepresentation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(BOOL)isAdded;
-(BOOL)removed;
-(BOOL)isRemoved;
-(void)setAdded:(BOOL)arg1 ;
-(BOOL)added;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)isFreeze;
-(BOOL)iris;
-(void)setIris:(BOOL)arg1 ;
@end

