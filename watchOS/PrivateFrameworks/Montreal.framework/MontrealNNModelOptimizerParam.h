//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Montreal/MontrealNNDescription.h>

#import <Montreal/MontrealNNDescriptionProtocol-Protocol.h>

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol>
{
    unsigned int _optimizerType;
    float _learningRate;
    float _momentum;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(readonly) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(readonly) float momentum; // @synthesize momentum=_momentum;
@property(readonly) float learningRate; // @synthesize learningRate=_learningRate;
@property(readonly) unsigned int optimizerType; // @synthesize optimizerType=_optimizerType;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithOptimizerType:(unsigned int)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

