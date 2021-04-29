/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaExperience/MediaExperience-Structs.h>
@class NSObject;

@interface FigRoutingSessionUpdateState : NSObject {

	OpaqueFigRoutingSessionRef _newSession;
	NSObject* _predictionContext;

}

@property (nonatomic,retain) OpaqueFigRoutingSessionRef newSession;              //@synthesize newSession=_newSession - In the implementation block
@property (nonatomic,retain) NSObject * predictionContext;                       //@synthesize predictionContext=_predictionContext - In the implementation block
-(void)dealloc;
-(id)initWithNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(OpaqueFigRoutingSessionRef)newSession;
-(void)setNewSession:(OpaqueFigRoutingSessionRef)arg1 ;
-(NSObject *)predictionContext;
-(void)setPredictionContext:(NSObject *)arg1 ;
@end

