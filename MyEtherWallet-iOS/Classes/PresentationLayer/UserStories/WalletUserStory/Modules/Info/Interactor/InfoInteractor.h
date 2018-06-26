//
//  InfoInteractor.h
//  MyEtherWallet-iOS
//
//  Created by Mikhail Nikanorov on 24/06/2018.
//  Copyright © 2018 MyEtherWallet, Inc.. All rights reserved.
//

#import "InfoInteractorInput.h"

@protocol InfoInteractorOutput;
@protocol MEWwallet;

@interface InfoInteractor : NSObject <InfoInteractorInput>
@property (nonatomic, weak) id<InfoInteractorOutput> output;
@property (nonatomic, strong) id <MEWwallet> walletService;
@end