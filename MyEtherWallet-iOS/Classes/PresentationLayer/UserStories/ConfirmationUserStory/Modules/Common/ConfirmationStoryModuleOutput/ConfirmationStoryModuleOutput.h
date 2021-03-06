//
//  ConfirmationStoryModuleOutput.h
//  MyEtherWallet-iOS
//
//  Created by Mikhail Nikanorov on 21/07/2018.
//  Copyright © 2018 MyEtherWallet, Inc. All rights reserved.
//

@import Foundation;
@import ViperMcFlurryX;

@protocol ConfirmationStoryModuleOutput <RamblerViperModuleOutput>
- (void) transactionDidSigned;
- (void) transactionDidRejected;
@end
